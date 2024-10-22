USE [kushop]
GO
/****** Object:  Table [dbo].[Brands]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Brands](
	[BrandID] [tinyint] IDENTITY(1,1) NOT NULL,
	[BrandName] [nvarchar](50) NULL,
 CONSTRAINT [PK_ProductBrands] PRIMARY KEY CLUSTERED 
(
	[BrandID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[BuyDtls]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[BuyDtls](
	[BuyID] [nvarchar](50) NOT NULL,
	[PdID] [nvarchar](50) NOT NULL,
	[BDtlQty] [float] NULL,
	[BDtlPrice] [float] NULL,
	[BDtlMoney] [float] NULL,
 CONSTRAINT [PK_BuyDtl] PRIMARY KEY CLUSTERED 
(
	[BuyID] ASC,
	[PdID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Buying]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Buying](
	[BuyId] [nvarchar](50) NOT NULL,
	[SupID] [nvarchar](50) NULL,
	[BuyDate] [date] NULL,
	[StfID] [nvarchar](50) NULL,
	[BuyDocID] [nvarchar](50) NULL,
	[Saleman] [nvarchar](50) NULL,
	[BuyQty] [float] NULL,
	[BuyMoney] [float] NULL,
	[BuyRemark] [text] NULL,
 CONSTRAINT [PK_Buying] PRIMARY KEY CLUSTERED 
(
	[BuyId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[CartDtls]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[CartDtls](
	[CartID] [nvarchar](50) NOT NULL,
	[PdID] [nvarchar](50) NOT NULL,
	[CDtlQty] [float] NULL,
	[CDtlPrice] [float] NULL,
	[CDtlMoney] [float] NULL,
 CONSTRAINT [PK_CartDtl] PRIMARY KEY CLUSTERED 
(
	[CartID] ASC,
	[PdID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Carts]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Carts](
	[CartID] [nvarchar](50) NOT NULL,
	[CusID] [nvarchar](50) NULL,
	[CartDate] [date] NULL,
	[CartMoney] [float] NULL,
	[CartQty] [float] NULL,
	[CartCF] [nchar](1) NULL,
	[CartPay] [nchar](1) NULL,
	[CartSend] [nchar](1) NULL,
	[CartVoid] [nchar](1) NULL,
 CONSTRAINT [PK_Carts] PRIMARY KEY CLUSTERED 
(
	[CartID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Customers]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Customers](
	[CusID] [nvarchar](50) NOT NULL,
	[CusName] [nvarchar](100) NOT NULL,
	[CusLogin] [nvarchar](50) NOT NULL,
	[CusPass] [nvarchar](50) NOT NULL,
	[CusEmail] [nvarchar](50) NOT NULL,
	[CusAdd] [text] NULL,
	[StartDate] [date] NULL,
	[LastLogin] [date] NULL,
 CONSTRAINT [PK_Customers] PRIMARY KEY CLUSTERED 
(
	[CusID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Duty]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Duty](
	[DutyID] [nvarchar](50) NOT NULL,
	[DutyName] [nvarchar](50) NULL,
 CONSTRAINT [PK_Duty] PRIMARY KEY CLUSTERED 
(
	[DutyID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Products]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Products](
	[PdID] [nvarchar](50) NOT NULL,
	[PdName] [nvarchar](50) NOT NULL,
	[PdtID] [tinyint] NULL,
	[BrandID] [tinyint] NULL,
	[PdPrice] [float] NULL,
	[PdCost] [float] NULL,
	[PdStk] [float] NULL,
	[PdLastBuy] [date] NULL,
	[PdLastSale] [date] NULL,
 CONSTRAINT [PK_Products] PRIMARY KEY CLUSTERED 
(
	[PdID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[ProductTypes]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[ProductTypes](
	[PdtID] [tinyint] IDENTITY(1,1) NOT NULL,
	[PdtName] [nvarchar](50) NULL,
 CONSTRAINT [PK_ProductTypes] PRIMARY KEY CLUSTERED 
(
	[PdtID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Staffs]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Staffs](
	[StfID] [nvarchar](50) NOT NULL,
	[StfName] [nvarchar](100) NOT NULL,
	[StfPass] [nvarchar](50) NOT NULL,
	[DutyID] [nvarchar](50) NULL,
	[StartDate] [date] NULL,
	[QuitDate] [date] NULL,
 CONSTRAINT [PK_Employees] PRIMARY KEY CLUSTERED 
(
	[StfID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Suppliers]    Script Date: 2023-01-03 16:28:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Suppliers](
	[SupID] [nvarchar](50) NOT NULL,
	[SupName] [nvarchar](100) NULL,
	[SupContact] [nvarchar](100) NULL,
	[SupTel] [nvarchar](50) NULL,
	[SupEmail] [nvarchar](50) NULL,
	[SupAdd] [text] NULL,
	[SupRemark] [text] NULL
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[Brands] ON 

INSERT [dbo].[Brands] ([BrandID], [BrandName]) VALUES (1, N'Kingston')
INSERT [dbo].[Brands] ([BrandID], [BrandName]) VALUES (2, N'PNY')
INSERT [dbo].[Brands] ([BrandID], [BrandName]) VALUES (3, N'Apacer')
SET IDENTITY_INSERT [dbo].[Brands] OFF
GO
INSERT [dbo].[Customers] ([CusID], [CusName], [CusLogin], [CusPass], [CusEmail], [CusAdd], [StartDate], [LastLogin]) VALUES (N'C001', N'รุ่งเรือง ร่ำรวย', N'rrrr', N'1111', N'rrrr@gmail.com', NULL, CAST(N'2023-01-01' AS Date), CAST(N'2023-01-01' AS Date))
INSERT [dbo].[Customers] ([CusID], [CusName], [CusLogin], [CusPass], [CusEmail], [CusAdd], [StartDate], [LastLogin]) VALUES (N'C002', N'ซื้อง่าย ขายคล่อง1', N'eazy1', N'12345', N'eazy@gmail.com', NULL, CAST(N'2023-01-01' AS Date), CAST(N'2023-01-01' AS Date))
INSERT [dbo].[Customers] ([CusID], [CusName], [CusLogin], [CusPass], [CusEmail], [CusAdd], [StartDate], [LastLogin]) VALUES (N'C003', N'สนุก สนาน', N'sanook', N'1234', N'sanook@ku.ac.th', NULL, CAST(N'2023-01-01' AS Date), CAST(N'2023-01-01' AS Date))
GO
INSERT [dbo].[Duty] ([DutyID], [DutyName]) VALUES (N'admin', N'ผู้ดูแลระบบ')
INSERT [dbo].[Duty] ([DutyID], [DutyName]) VALUES (N'manager', N'ผจก.ร้าน')
INSERT [dbo].[Duty] ([DutyID], [DutyName]) VALUES (N'user', N'เจ้าหน้าที่ร้าน')
GO
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p001', N'Flash Drive 32G USB3', 1, 2, 200, 150, 5, CAST(N'2022-11-10' AS Date), CAST(N'2022-11-10' AS Date))
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p002', N'Flash Drive 32G USB2', 1, 3, 180, 90, 5, NULL, NULL)
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p003', N'Ram PC DDR4 16G 3600', 3, 1, 3500, 2500, 1, NULL, NULL)
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p004', N'Ram NB DDR4 8G 2400', 3, 2, 2000, 1200, 1, NULL, NULL)
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p005', N'SSD SATA 256G', 2, 3, 1500, 1000, 2, NULL, NULL)
INSERT [dbo].[Products] ([PdID], [PdName], [PdtID], [BrandID], [PdPrice], [PdCost], [PdStk], [PdLastBuy], [PdLastSale]) VALUES (N'p006', N'SSD M.2 NVMe 512G', 2, 1, 2000, 1500, 1, NULL, NULL)
GO
SET IDENTITY_INSERT [dbo].[ProductTypes] ON 

INSERT [dbo].[ProductTypes] ([PdtID], [PdtName]) VALUES (1, N'Flash Drive')
INSERT [dbo].[ProductTypes] ([PdtID], [PdtName]) VALUES (2, N'Storage')
INSERT [dbo].[ProductTypes] ([PdtID], [PdtName]) VALUES (3, N'Memory')
SET IDENTITY_INSERT [dbo].[ProductTypes] OFF
GO
INSERT [dbo].[Staffs] ([StfID], [StfName], [StfPass], [DutyID], [StartDate], [QuitDate]) VALUES (N'dev', N'นักพัฒนา ระบบ', N'1234', N'admin', CAST(N'2022-11-10' AS Date), NULL)
INSERT [dbo].[Staffs] ([StfID], [StfName], [StfPass], [DutyID], [StartDate], [QuitDate]) VALUES (N'user01', N'สมชาย ยอดนักขาย', N'1111', N'staff', CAST(N'2022-11-10' AS Date), NULL)
GO
INSERT [dbo].[Suppliers] ([SupID], [SupName], [SupContact], [SupTel], [SupEmail], [SupAdd], [SupRemark]) VALUES (N'SP001', N'บริษัท ขายส่ง1 จำกัด (มหาชน)', N'คุณสมหมาย ขายเก่ง', N'0891991999', N'sm@sale1.com', NULL, NULL)
INSERT [dbo].[Suppliers] ([SupID], [SupName], [SupContact], [SupTel], [SupEmail], [SupAdd], [SupRemark]) VALUES (N'SP002', N'หจก.รุ่งเรืองคอมพิวเตอร์', N'คุณรุ่งเรือง เครื่องบินรบ', N'0811191119', N'rr@rr.com', NULL, NULL)
INSERT [dbo].[Suppliers] ([SupID], [SupName], [SupContact], [SupTel], [SupEmail], [SupAdd], [SupRemark]) VALUES (N'SP003', N'ร้านมาไกลอุปกรณ์', N'คุณสุดา ลาลาลา', N'0866789000', N'suda@far.com', NULL, NULL)
GO
ALTER TABLE [dbo].[Carts] ADD  CONSTRAINT [DF_Carts_CartCF]  DEFAULT (N'N') FOR [CartCF]
GO
ALTER TABLE [dbo].[Carts] ADD  CONSTRAINT [DF_Carts_CartPay]  DEFAULT (N'N') FOR [CartPay]
GO
ALTER TABLE [dbo].[Carts] ADD  CONSTRAINT [DF_Carts_CartVoid]  DEFAULT (N'N') FOR [CartVoid]
GO
