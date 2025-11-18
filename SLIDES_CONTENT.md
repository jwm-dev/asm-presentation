# Assembly Language Presentation - Slide Content

This document contains the exact content for each slide. Use this to create your PPTX/PDF.

---

## Slide 1: Title
**Background:** Dark (black or very dark gray)
**Text Color:** White
**Font Size:** 80pt for title, 60pt for subtitle

```
Assembly Language
The Foundation of Computing
```

**Design Notes:** 
- Center-aligned
- Consider subtle CPU die or circuit board background image (low opacity)
- Maximum whitespace

---

## Slide 2: History & Purpose
**Background:** Dark
**Text Color:** White
**Font Size:** 60pt for headlines

```
Born: 1940s-50s

One step above machine code

Direct hardware control
```

**Design Notes:**
- Each line separate, well-spaced
- Optional: Vintage computer image (ENIAC, 1940s mainframe) on right side
- Keep image subtle, text dominant

---

## Slide 3: Design Characteristics
**Background:** Dark
**Text Color:** White
**Font Size:** 60pt

```
CPU-specific instructions

Maximum performance

Minimal abstraction
```

**Design Notes:**
- Three distinct sections/tiles
- Optional visual: Simple diagram showing High-level → Assembly → Machine Code
- High contrast, clean lines

---

## Slide 4: C vs Assembly
**Background:** Dark (optimal for code)
**Text Color:** White/syntax highlighted
**Font Size:** 44pt for code

**Two columns side-by-side:**

```
C CODE (loop)          ASM CODE (formula)

int sum = 0;           mov eax, edi
for (i=1; i<=n; i++)   inc edi
  sum += i;            imul eax, edi
return sum;            shr eax, 1
                       ret

O(n) time              O(1) time
~100 instructions      5 instructions
```

**Design Notes:**
- Two-column layout with clear divider
- Left side = C, Right side = Assembly
- Bottom shows the performance difference
- This is your demonstration slide

---

## Slide 5: Install & Run
**Background:** Dark
**Text Color:** White/green (terminal colors)
**Font Size:** 44pt for code, 60pt for header

**Header (small, top):** Ubuntu 22.04 - Live Demo

```bash
# See what GCC generates
gcc -S -O2 demo.c

# Write better assembly
nasm -f elf64 optimized.asm -o optimized.o

# Link and run
gcc demo_with_asm.o optimized.o -o demo
./demo
```

**Design Notes:**
- Monospace font
- Green text on black = terminal aesthetic
- Shows the comparison workflow
- Make it VERY readable from back of room

---

## Slide 6: Ecosystem
**Background:** Dark
**Text Color:** White
**Font Size:** 60pt

```
Assemblers: NASM, GAS, MASM

Debuggers: GDB, LLDB

Use cases: kernels, drivers, optimization
```

**Design Notes:**
- Three tiles/sections
- Each category gets breathing room
- Consider subtle icons (tools, debug symbol, gear)

---

## Slide 7: Stack Overflow Says
**Background:** Dark
**Text Color:** White
**Font Size:** 60pt for main text

```
"Most intimidating" language

Used by: 5.2% of developers

Respected, rarely preferred
```

**Design Notes:**
- First line in quotes, slightly different style/color
- Optional: Small bar chart or pie chart showing 5.2%
- Footer: "Source: Stack Overflow Developer Survey 2025" (small, 20pt)

---

## Slide 8: Takeaway
**Background:** Dark
**Text Color:** White
**Font Size:** 80pt

```
Assembly: Where code meets silicon
```

**Design Notes:**
- Perfectly centered
- Maximum impact, minimum content
- This is your "one more thing" moment
- Consider very subtle circuit pattern or CPU visualization

---

## Format Compliance Checklist

✓ Max 8 words per line
✓ ≤3 tiles per slide (except code slide)
✓ Font size ≥60pt for headlines (except code at 44-48pt)
✓ Font size ≥40pt for code
✓ No text walls
✓ High contrast (dark background + light text)
✓ One idea per slide

## Recommended Fonts
- **Headlines:** Helvetica Neue, Arial Bold, Gill Sans
- **Code:** Fira Code, Consolas, Monaco, Source Code Pro

## Color Palette Suggestions
- **Background:** #1a1a1a or #000000
- **Text:** #ffffff or #f0f0f0
- **Accent/Highlights:** #00aaff or #00ff88
- **Comments (code):** #6a9955
- **Keywords (code):** #569cd6
- **Numbers (code):** #b5cea8
