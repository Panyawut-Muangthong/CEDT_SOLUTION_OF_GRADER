// ==========================================
// 1. ADD YOUR QUESTIONS HERE
// ==========================================
const problems = [
    {
        id: 1,
        title: "1.Hello Croissant",
        tags: ["expression"],
        pdfPath: "data/pdf/Hello Croissant.pdf",
        cppPath: "data/code/Hello Croissant.cpp",
        descPath: "data/description/Hello Croissant.txt"
    },
    {
        id: 2,
        title: "2. Graph Traversal",
        tags: ["graphs", "dfs", "medium"],
        pdfPath: "data/pdf/q2.pdf",
        cppPath: "data/code/ans2.cpp",
        descPath: "data/description/desc2.txt"
    }
    // To add a new question, copy the block above, paste it here, 
    // change the ID number, and update the paths!
];

// ==========================================
// 2. LOGIC (DO NOT EDIT BELOW UNLESS NEEDED)
// ==========================================

// Initialize the application
document.addEventListener("DOMContentLoaded", () => {
    const listContainer = document.getElementById("problem-list");

    // Render the sidebar
    problems.forEach(problem => {
        const card = document.createElement("div");
        card.className = "problem-card";
        card.onclick = () => loadProblem(problem.id, card);

        const tagsHtml = problem.tags.map(tag => `<span class="tag">&lt;${tag}&gt;</span>`).join('');
        
        card.innerHTML = `
            <div class="problem-title">${problem.title}</div>
            <div class="tags">${tagsHtml}</div>
        `;
        listContainer.appendChild(card);
    });
});

// Load a specific problem when clicked
async function loadProblem(id, cardElement) {
    // 1. Update UI Selection
    document.querySelectorAll(".problem-card").forEach(el => el.classList.remove("active"));
    cardElement.classList.add("active");

    // Find the problem data
    const problem = problems.find(p => p.id === id);
    if (!problem) return;

    // 2. Load PDF
    document.getElementById("pdf-title").textContent = problem.title;
    document.getElementById("pdf-placeholder").style.display = "none";
    const iframe = document.getElementById("pdf-frame");
    iframe.style.display = "block";
    iframe.src = problem.pdfPath;

    // 3. Load C++ File
    try {
        const cppResponse = await fetch(problem.cppPath);
        if(cppResponse.ok) {
            const cppText = await cppResponse.text();
            const codeBlock = document.getElementById("cpp-code");
            codeBlock.textContent = cppText;
            codeBlock.removeAttribute('data-highlighted'); // Reset highlighter
            hljs.highlightElement(codeBlock);
        } else {
            document.getElementById("cpp-code").textContent = "// Error: Could not find C++ file at " + problem.cppPath;
        }
    } catch (e) {
        document.getElementById("cpp-code").textContent = "// Error loading file. Make sure you are using a local server or GitHub Pages.";
    }

    // 4. Load Description File
    try {
        const descResponse = await fetch(problem.descPath);
        if(descResponse.ok) {
            const descText = await descResponse.text();
            document.getElementById("desc-text").textContent = descText;
        } else {
            document.getElementById("desc-text").textContent = "Error: Could not find description file at " + problem.descPath;
        }
    } catch (e) {
        document.getElementById("desc-text").textContent = "Error loading description.";
    }
}

// Toggle between C++ Code and Description Text
function toggleView(viewName) {
    // Reset buttons
    document.querySelectorAll(".tab-btn").forEach(btn => btn.classList.remove("active"));
    
    // Hide all views
    document.getElementById("view-code").classList.remove("active");
    document.getElementById("view-desc").classList.remove("active");

    // Activate selected
    if (viewName === 'code') {
        document.querySelector(".tab-btn:nth-child(1)").classList.add("active");
        document.getElementById("view-code").classList.add("active");
    } else {
        document.querySelector(".tab-btn:nth-child(2)").classList.add("active");
        document.getElementById("view-desc").classList.add("active");
    }
}
