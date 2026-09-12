// ==========================================
// 1. ADD YOUR QUESTIONS HERE
// ==========================================
const problems = [
    {
        id: 1,
        title: "00_Intro_11",
        tags: ["intro"],
        pdfPath: "data/pdf/00_Intro_11.pdf",
        cppPath: "data/code/00_Intro_11.cpp",
        descPath: "data/description/00_Intro_11.txt"
    },
    {
        id: 2,
        title: "01_Expr_11",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_11.pdf",
        cppPath: "data/code/01_Expr_11.cpp",
        descPath: "data/description/01_Expr_11.txt"
    },
    {
        id: 3,
        title: "01_Expr_12",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_12.pdf",
        cppPath: "data/code/01_Expr_12.cpp",
        descPath: "data/description/01_Expr_12.txt"
    },
    {
        id: 4,
        title: "01_Expr_13",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_13.pdf",
        cppPath: "data/code/01_Expr_13.cpp",
        descPath: "data/description/01_Expr_13.txt"
    },
    {
        id: 5,
        title: "01_Expr_14",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_14.pdf",
        cppPath: "data/code/01_Expr_14.cpp",
        descPath: "data/description/01_Expr_14.txt"
    },
    {
        id: 6,
        title: "01_Expr_15",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_15.pdf",
        cppPath: "data/code/01_Expr_15.cpp",
        descPath: "data/description/01_Expr_15.txt"
    },
    {
        id: 7,
        title: "01_Expr_21",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_21.pdf",
        cppPath: "data/code/01_Expr_21.cpp",
        descPath: "data/description/01_Expr_21.txt"
    },
    {
        id: 8,
        title: "01_Expr_22",
        tags: ["expression"],
        pdfPath: "data/pdf/01_Expr_22.pdf",
        cppPath: "data/code/01_Expr_22.cpp",
        descPath: "data/description/01_Expr_22.txt"
    },
    {
        id: 9,
        title: "01_Str_11",
        tags: ["string"],
        pdfPath: "data/pdf/01_Str_11.pdf",
        cppPath: "data/code/01_Str_11.cpp",
        descPath: "data/description/01_Str_11.txt"
    },
    {
        id: 10,
        title: "01_Str_12",
        tags: ["string"],
        pdfPath: "data/pdf/01_Str_12.pdf",
        cppPath: "data/code/01_Str_12.cpp",
        descPath: "data/description/01_Str_12.txt"
    },
    {
        id: 11,
        title: "01_Str_31",
        tags: ["string"],
        pdfPath: "data/pdf/01_Str_31.pdf",
        cppPath: "data/code/01_Str_31.cpp",
        descPath: "data/description/01_Str_31.txt"
    },
    {
        id: 12,
        title: "02_If_11",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_11.pdf",
        cppPath: "data/code/02_If_11.cpp",
        descPath: "data/description/02_If_11.txt"
    },
    {
        id: 13,
        title: "02_If_12",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_12.pdf",
        cppPath: "data/code/02_If_12.cpp",
        descPath: "data/description/02_If_12.txt"
    },
    {
        id: 14,
        title: "02_If_13",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_13.pdf",
        cppPath: "data/code/02_If_13.cpp",
        descPath: "data/description/02_If_13.txt"
    },
    {
        id: 15,
        title: "02_If_14",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_14.pdf",
        cppPath: "data/code/02_If_14.cpp",
        descPath: "data/description/02_If_14.txt"
    },
    {
        id: 16,
        title: "02_If_15",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_15.pdf",
        cppPath: "data/code/02_If_15.cpp",
        descPath: "data/description/02_If_15.txt"
    },
    {
        id: 17,
        title: "02_If_16",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_16.pdf",
        cppPath: "data/code/02_If_16.cpp",
        descPath: "data/description/02_If_16.txt"
    },
    {
        id: 18,
        title: "02_If_17",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_17.pdf",
        cppPath: "data/code/02_If_17.cpp",
        descPath: "data/description/02_If_17.txt"
    },
    {
        id: 19,
        title: "02_If_21",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_21.pdf",
        cppPath: "data/code/02_If_21.cpp",
        descPath: "data/description/02_If_21.txt"
    },
    {
        id: 20,
        title: "02_If_22",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_22.pdf",
        cppPath: "data/code/02_If_22.cpp",
        descPath: "data/description/02_If_22.txt"
    },
    {
        id: 21,
        title: "02_If_31",
        tags: ["if"],
        pdfPath: "data/pdf/02_If_31.pdf",
        cppPath: "data/code/02_If_31.cpp",
        descPath: "data/description/02_If_31.txt"
    },
    {
        id: 22,
        title: "02_If_FC_11",
        tags: ["if", "flowchart"],
        pdfPath: "data/pdf/02_If_FC_11.pdf",
        cppPath: "data/code/02_If_FC_11.cpp",
        descPath: "data/description/02_If_FC_11.txt"
    },
    {
        id: 23,
        title: "02_If_FC_22",
        tags: ["if", "flowchart"],
        pdfPath: "data/pdf/02_If_FC_22.pdf",
        cppPath: "data/code/02_If_FC_22.cpp",
        descPath: "data/description/02_If_FC_22.txt"
    },
    {
        id: 24,
        title: "03_Loop_11",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_11.pdf",
        cppPath: "data/code/03_Loop_11.cpp",
        descPath: "data/description/03_Loop_11.txt"
    },
    {
        id: 25,
        title: "03_Loop_12",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_12.pdf",
        cppPath: "data/code/03_Loop_12.cpp",
        descPath: "data/description/03_Loop_12.txt"
    },
    {
        id: 26,
        title: "03_Loop_13",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_13.pdf",
        cppPath: "data/code/03_Loop_13.cpp",
        descPath: "data/description/03_Loop_13.txt"
    },
    {
        id: 27,
        title: "03_Loop_14",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_14.pdf",
        cppPath: "data/code/03_Loop_14.cpp",
        descPath: "data/description/03_Loop_14.txt"
    },
    {
        id: 28,
        title: "03_Loop_15",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_15.pdf",
        cppPath: "data/code/03_Loop_15.cpp",
        descPath: "data/description/03_Loop_15.txt"
    },
    {
        id: 29,
        title: "03_Loop_16",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_16.pdf",
        cppPath: "data/code/03_Loop_16.cpp",
        descPath: "data/description/03_Loop_16.txt"
    },
    {
        id: 30,
        title: "03_Loop_21",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_21.pdf",
        cppPath: "data/code/03_Loop_21.cpp",
        descPath: "data/description/03_Loop_21.txt"
    },
    {
        id: 31,
        title: "03_Loop_22",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_22.pdf",
        cppPath: "data/code/03_Loop_22.cpp",
        descPath: "data/description/03_Loop_22.txt"
    },
    {
        id: 32,
        title: "03_Loop_23",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_23.pdf",
        cppPath: "data/code/03_Loop_23.cpp",
        descPath: "data/description/03_Loop_23.txt"
    },
    {
        id: 33,
        title: "03_Loop_24",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_24.pdf",
        cppPath: "data/code/03_Loop_24.cpp",
        descPath: "data/description/03_Loop_24.txt"
    },
    {
        id: 34,
        title: "03_Loop_31",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_31.pdf",
        cppPath: "data/code/03_Loop_31.cpp",
        descPath: "data/description/03_Loop_31.txt"
    },
    {
        id: 35,
        title: "03_Loop_32",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_32.pdf",
        cppPath: "data/code/03_Loop_32.cpp",
        descPath: "data/description/03_Loop_32.txt"
    },
    {
        id: 36,
        title: "03_Loop_33",
        tags: ["loop"],
        pdfPath: "data/pdf/03_Loop_33.pdf",
        cppPath: "data/code/03_Loop_33.cpp",
        descPath: "data/description/03_Loop_33.txt"
    },
    {
        id: 37,
        title: "03_Loop_FC_21",
        tags: ["loop", "flowchart"],
        pdfPath: "data/pdf/03_Loop_FC_21.pdf",
        cppPath: "data/code/03_Loop_FC_21.cpp",
        descPath: "data/description/03_Loop_FC_21.txt"
    },
    {
        id: 38,
        title: "03_Loop_FC_22",
        tags: ["loop", "flowchart"],
        pdfPath: "data/pdf/03_Loop_FC_22.pdf",
        cppPath: "data/code/03_Loop_FC_22.cpp",
        descPath: "data/description/03_Loop_FC_22.txt"
    },
    {
        id: 39,
        title: "04_Array_11",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_11.pdf",
        cppPath: "data/code/04_Array_11.cpp",
        descPath: "data/description/04_Array_11.txt"
    },
    {
        id: 40,
        title: "04_Array_12",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_12.pdf",
        cppPath: "data/code/04_Array_12.cpp",
        descPath: "data/description/04_Array_12.txt"
    },
    {
        id: 41,
        title: "04_Array_13",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_13.pdf",
        cppPath: "data/code/04_Array_13.cpp",
        descPath: "data/description/04_Array_13.txt"
    },
    {
        id: 42,
        title: "04_Array_14",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_14.pdf",
        cppPath: "data/code/04_Array_14.cpp",
        descPath: "data/description/04_Array_14.txt"
    },
    {
        id: 43,
        title: "04_Array_21",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_21.pdf",
        cppPath: "data/code/04_Array_21.cpp",
        descPath: "data/description/04_Array_21.txt"
    },
    {
        id: 44,
        title: "04_Array_22",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_22.pdf",
        cppPath: "data/code/04_Array_22.cpp",
        descPath: "data/description/04_Array_22.txt"
    },
    {
        id: 45,
        title: "04_Array_23",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_23.pdf",
        cppPath: "data/code/04_Array_23.cpp",
        descPath: "data/description/04_Array_23.txt"
    },
    {
        id: 46,
        title: "04_Array_24",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_24.pdf",
        cppPath: "data/code/04_Array_24.cpp",
        descPath: "data/description/04_Array_24.txt"
    },
    {
        id: 47,
        title: "04_Array_25",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_25.pdf",
        cppPath: "data/code/04_Array_25.cpp",
        descPath: "data/description/04_Array_25.txt"
    },
    {
        id: 48,
        title: "04_Array_26",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_26.pdf",
        cppPath: "data/code/04_Array_26.cpp",
        descPath: "data/description/04_Array_26.txt"
    },
    {
        id: 49,
        title: "04_Array_27",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_27.pdf",
        cppPath: "data/code/04_Array_27.cpp",
        descPath: "data/description/04_Array_27.txt"
    },
    {
        id: 50,
        title: "04_Array_28",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_28.pdf",
        cppPath: "data/code/04_Array_28.cpp",
        descPath: "data/description/04_Array_28.txt"
    },
    {
        id: 51,
        title: "04_Array_29",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_29.pdf",
        cppPath: "data/code/04_Array_29.cpp",
        descPath: "data/description/04_Array_29.txt"
    },
    {
        id: 52,
        title: "04_Array_31",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_31.pdf",
        cppPath: "data/code/04_Array_31.cpp",
        descPath: "data/description/04_Array_31.txt"
    },
    {
        id: 53,
        title: "04_Array_32",
        tags: ["array"],
        pdfPath: "data/pdf/04_Array_32.pdf",
        cppPath: "data/code/04_Array_32.cpp",
        descPath: "data/description/04_Array_32.txt"
    }
];
// ==========================================
// 2. LOGIC (UPDATED WITH FILTERS, BLUR, AND HINTS)
// ==========================================

// Initialize the application
document.addEventListener("DOMContentLoaded", () => {
    populateTags();
    renderProblemList();
});

// Automatically extract the star from your naming convention (e.g., "04_String_32" -> "3")
function getProblemStar(problem) {
    const parts = problem.title.split('_');
    const lastPart = parts[parts.length - 1]; 
    
    // Check if the last part is a valid number
    if (lastPart && !isNaN(lastPart) && lastPart.length >= 1) {
        return parseInt(lastPart.charAt(0)); 
    }
    return 0; 
}

// Dynamically generate the Tag dropdown based on your data
function populateTags() {
    const tagFilter = document.getElementById("tag-filter");
    const allTags = new Set();
    
    problems.forEach(p => {
        if (p.tags) {
            p.tags.forEach(t => allTags.add(t));
        }
    });
    
    allTags.forEach(tag => {
        const option = document.createElement("option");
        option.value = tag;
        option.textContent = `<${tag}>`;
        tagFilter.appendChild(option);
    });
}

// Render the sidebar list based on selected filters
function renderProblemList() {
    const listContainer = document.getElementById("problem-list");
    listContainer.innerHTML = ''; // Clear existing list
    
    const selectedTag = document.getElementById("tag-filter").value;
    const selectedStar = document.getElementById("star-filter").value;
    
    // Filter the array
    const filteredProblems = problems.filter(problem => {
        const problemStar = getProblemStar(problem).toString();
        
        const matchTag = selectedTag === "all" || problem.tags.includes(selectedTag);
        const matchStar = selectedStar === "all" || problemStar === selectedStar;
        
        return matchTag && matchStar;
    });
    
    // Create UI for the filtered problems
    filteredProblems.forEach(problem => {
        const card = document.createElement("div");
        card.className = "problem-card";
        
        // Keep card highlighted if it is the currently active problem
        const currentTitle = document.getElementById("pdf-title").textContent;
        if (currentTitle === problem.title) {
            card.classList.add("active");
        }
        
        card.onclick = () => loadProblem(problem.id, card);
        
        // Build Tags and Stars HTML
        const tagsHtml = problem.tags.map(tag => `<span class="tag">&lt;${tag}&gt;</span>`).join('');
        const starNum = getProblemStar(problem);
        const starHtml = starNum > 0 ? `<span class="star-rating">${'⭐'.repeat(starNum)}</span>` : '';
        
        card.innerHTML = `
            <div class="problem-title">${problem.title} ${starHtml}</div>
            <div class="tags">${tagsHtml}</div>
        `;
        listContainer.appendChild(card);
    });
}

// Load a specific problem when clicked
async function loadProblem(id, cardElement) {
    document.querySelectorAll(".problem-card").forEach(el => el.classList.remove("active"));
    cardElement.classList.add("active");

    const problem = problems.find(p => p.id === id);
    if (!problem) return;

    // Load PDF
    document.getElementById("pdf-title").textContent = problem.title;
    document.getElementById("pdf-placeholder").style.display = "none";
    const iframe = document.getElementById("pdf-frame");
    iframe.style.display = "block";
    iframe.src = problem.pdfPath + "#view=FitH";

    // Load C++ File
    try {
        const cppResponse = await fetch(problem.cppPath);
        if(cppResponse.ok) {
            const cppText = await cppResponse.text();
            const codeBlock = document.getElementById("cpp-code");
            codeBlock.textContent = cppText;
            
            // RESET THE BLUR EVERY TIME WE LOAD A NEW PROBLEM
            codeBlock.classList.add("blurred-content");
            const checkbox = document.getElementById("blur-toggle-checkbox");
            if (checkbox) checkbox.checked = false;
            const toggleLabel = document.getElementById("toggle-label");
            if (toggleLabel) toggleLabel.textContent = "Blur";
            
            codeBlock.removeAttribute('data-highlighted');
            hljs.highlightElement(codeBlock);
        } else {
            document.getElementById("cpp-code").textContent = "// Error: Could not find C++ file";
        }
    } catch (e) {
        document.getElementById("cpp-code").textContent = "// Error loading file.";
    }

    // Load Description File
    try {
        const descResponse = await fetch(problem.descPath);
        if(descResponse.ok) {
            const descTextRaw = await descResponse.text();
            
            // Step 1: Escape standard HTML characters so < and > don't break the page
            let safeText = descTextRaw.replace(/[&<>'"]/g, char => ({
                '&': '&amp;', '<': '&lt;', '>': '&gt;', "'": '&#39;', '"': '&quot;'
            }[char]));
            
            // Step 2: Replace ||text|| with a clickable spoiler tag
            safeText = safeText.replace(/\|\|(.*?)\|\|/g, '<span class="spoiler" onclick="this.classList.add(\'revealed\')">$1</span>');
            
            // Use innerHTML instead of textContent so our new span tags work
            document.getElementById("desc-text").innerHTML = safeText;
        } else {
            document.getElementById("desc-text").textContent = "Error: Could not find description file";
        }
    } catch (e) {
        document.getElementById("desc-text").textContent = "Error loading description.";
    }
}

// Toggle between C++ Code and Description Text
function toggleView(viewName) {
    document.querySelectorAll(".tab-btn").forEach(btn => btn.classList.remove("active"));
    document.getElementById("view-code").classList.remove("active");
    document.getElementById("view-desc").classList.remove("active");

    if (viewName === 'code') {
        document.querySelector(".tab-btn:nth-child(1)").classList.add("active");
        document.getElementById("view-code").classList.add("active");
    } else {
        document.querySelector(".tab-btn:nth-child(2)").classList.add("active");
        document.getElementById("view-desc").classList.add("active");
    }
}

// Toggle the blur based on the checkbox state
function toggleCodeBlur() {
    const codeBlock = document.getElementById("cpp-code");
    const checkbox = document.getElementById("blur-toggle-checkbox");
    const label = document.getElementById("toggle-label");
    
    if (checkbox && checkbox.checked) {
        // Switch is ON -> Reveal code
        codeBlock.classList.remove("blurred-content");
        if (label) label.textContent = "Reveal";
    } else {
        // Switch is OFF -> Blur code
        codeBlock.classList.add("blurred-content");
        if (label) label.textContent = "Blur";
    }
}