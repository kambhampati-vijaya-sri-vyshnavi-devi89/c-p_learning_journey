# 🧠 TextMorph

**AI-Powered Content Simplification, Summarization & Paraphrasing Suite**

Transforming complex content into clear, concise, and accessible communication.

![TextMorph Banner](https://via.placeholder.com/1200x400/667eea/ffffff?text=TextMorph+AI+Platform)

## 🔗 Quick Links

| Category | Link |
|----------|------|
| 📽️ Demo Video | Coming Soon |
| 🧩 Source Code | This Repository |
| 🐳 Docker Support | Yes |
| 🚀 Live Demo | [Deployed Link](#) |
| 🧠 AI Models | Pegasus · BART · FLAN-T5 · T5 |

## 📌 Table of Contents

- [About the Project](#about-the-project)
- [Problem Statement & Motivation](#problem-statement--motivation)
- [Key Features](#key-features)
- [Architecture](#architecture)
- [Tech Stack](#tech-stack)
- [Models Used](#models-used)
- [Project Structure](#project-structure)
- [Installation & Setup](#installation--setup)
- [Usage Guide](#usage-guide)
- [Admin Controls](#admin-controls)
- [Datasets & Evaluation](#datasets--evaluation)
- [Screenshots](#screenshots)
- [Roadmap](#roadmap)
- [Team](#team)
- [License](#license)

## 🎯 About the Project

TextMorph is an advanced AI-powered platform that transforms complex textual content into simplified, summarized, and paraphrased versions. Built with state-of-the-art transformer models, it provides comprehensive readability analysis and content adaptation capabilities for various user needs.

### Problem Statement & Motivation

In today's information-rich world, users face challenges with:
- **Complex Content**: Technical documents, academic papers, and legal texts are often difficult to understand
- **Information Overload**: Extracting key insights from lengthy documents is time-consuming
- **Accessibility Barriers**: Content isn't always optimized for different reading levels
- **Language Complexity**: Need for content adaptation across different proficiency levels

TextMorph addresses these challenges by providing intelligent text transformation tools that make content more accessible and actionable.

## ✨ Key Features

### 🎯 Core Capabilities
- **Multi-level Summarization**: Generate concise summaries at different length levels
- **Advanced Paraphrasing**: Rewrite content with varying complexity and style
- **Readability Analysis**: Comprehensive scoring using 5+ readability metrics
- **Dataset Augmentation**: Tools for custom model training and fine-tuning

### 🔐 User Management
- **Role-based Access**: Admin and General User roles
- **Secure Authentication**: JWT-based authentication with security questions
- **Activity Tracking**: Comprehensive user activity monitoring
- **Feedback System**: Integrated user feedback collection

### 📊 Analytics & Monitoring
- **Real-time Dashboard**: User metrics and system analytics
- **Activity Monitoring**: Track user interactions and model usage
- **Feedback Analytics**: Sentiment analysis and rating trends
- **Admin Controls**: Comprehensive system administration

## 🏗 Architecture


## 🛠 Tech Stack

### Frontend
- **Streamlit** - Web application framework
- **Plotly** - Interactive visualizations
- **Matplotlib** - Static visualizations
- **WordCloud** - Text visualization

### Backend
- **Python 3.8+** - Core programming language
- **SQLite** - Database management
- **JWT** - Authentication tokens
- **bcrypt** - Password hashing

### AI/ML
- **Transformers** - HuggingFace model integration
- **PyTorch** - Deep learning framework
- **NLTK** - Natural language processing
- **SentencePiece** - Tokenization

### Deployment
- **Docker** - Containerization
- **Docker Compose** - Multi-container orchestration

## 🤖 Models Used

| Model | Company | Parameters | Purpose | Key Features |
|-------|---------|------------|---------|--------------|
| **BART** (facebook/bart-large-cnn) | Meta AI | 400M | Summarization | Denoising autoencoder, excellent for abstractive summarization |
| **T5** (t5-small) | Google | 140M | Paraphrasing | Text-to-text framework, versatile for multiple tasks |
| **Pegasus** (google/pegasus-cnn_dailymail) | Google | 568M | Summarization | Pre-training with gap sentences, great for news summarization |
| **FLAN-T5** (google/flan-t5-base) | Google | 250M | Summarization | Instruction-tuned version, better following user instructions |

### Model Performance Characteristics

- **BART**: Best for balanced summarization with good coherence
- **T5**: Excellent for paraphrasing and text transformation tasks
- **Pegasus**: Superior for extractive-style summarization
- **FLAN-T5**: Better at following specific user instructions

