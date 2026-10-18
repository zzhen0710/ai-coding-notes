# Sources：来源清单

保留能回答具体学习问题的资料，不维护完整生态清单。产品行为优先核对官方文档，机制解释结合作者教材和实现，通过实验检验自己的理解。

## 初始选读

以下保留 2026-10-16 对相关页面或章节目录的历史核对范围，不表示当前页面已重新核验。来源核对与任务运行结果分别记录，个人阅读进度与掌握状态保存在本地计划。

优先围绕 Coding Workflows、Context Engineering、Reliability and Evaluation 选读；基础与工具机制按需补充，Agent 实现资料保留为 Backlog。

| 来源 | 类型 | 用途与选读范围 | 核对范围 |
| --- | --- | --- | --- |
| [Codex Best Practices](https://learn.chatgpt.com/docs/learn/best-practices) | 官方文档 | 任务目标、上下文、约束与完成条件；按当前任务查阅 | 已核对相关说明；不构成客户端实测证据 |
| [Testing Agent Skills Systematically with Evals](https://developers.openai.com/blog/eval-skills) | 官方工程文章 | 定义成功、记录运行、建立小型检查集 | 已核对评测方法；不构成示例运行证据 |
| [Demystifying evals for AI agents](https://www.anthropic.com/engineering/demystifying-evals-for-ai-agents) | 官方工程文章 | 区分运行记录与最终状态，组合确定性和人工检查 | 已核对相关方法；不作为个人成功概率依据 |
| [深入理解 AI Agent](https://bojieli.github.io/ai-agent-book/) | 作者教材 | 优先选上下文、Coding 工作流与评估；基础和工具机制够用即可，实现章节列为 Backlog | 已核对十章目录；不构成逐章内容或实验验证 |
| [learn-claude-code](https://github.com/shareAI-lab/learn-claude-code) | 作者实现教程 | Backlog：具体 Agent 实现需求明确后，再选 Agent Loop、Tool Use、Permission | 已核对当时 17 课与旧 12 课并存说明；不构成代码运行证据 |
| [Hugging Face Context Course](https://huggingface.co/learn/context-course/en/unit0/introduction) | 官方课程 | Skills、MCP 等对应单元选读，不把整门课程设为入门前置 | 已核对课程目录与前置要求 |
| [Python Tutorial](https://docs.python.org/3/tutorial/) | 官方教程 | 仅在实际任务需要 Python/API 时补相关基础，不作为三条主线的统一前置 | 已核对教程对象与目录；不列为整套必修课 |

## 使用约定

- 阅读前先写明本次要解决的问题，按章节或小节选读；不并行通读多套教材。
- 产品页可能变化，实际配置前重新核对；复现实验记录具体版本，代码教程尽量固定到所用提交。
- 已读、已理解、已实验与独立掌握是不同状态，不由来源数量或项目热度推定质量。
- 具体借用的定义、结论或示例在相关正文就近用描述性文本链接引用原始来源；不把教程代码写成个人原创。
- 本清单负责选材说明，不替代正文中的直接引用；引用密集的综述可使用编号脚注。公开链接必须在其他检出中可访问，不指向被忽略的本地文件。
- 教材内容、官方产品事实、实验观察和个人推测分别表述。暂未采用的资料不提前加入必修范围。
