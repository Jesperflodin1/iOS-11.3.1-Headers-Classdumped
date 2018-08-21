/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSTTableStyle, TSTCellStyle, TSWPParagraphStyle, TSWPShapeStyle;


@protocol TSTStyleProviding
@property (nonatomic,retain) TSTTableStyle * tableStyle; 
@property (nonatomic,retain) TSTCellStyle * bodyCellStyle; 
@property (nonatomic,retain) TSTCellStyle * headerRowCellStyle; 
@property (nonatomic,retain) TSTCellStyle * headerColumnCellStyle; 
@property (nonatomic,retain) TSTCellStyle * footerRowCellStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * bodyTextStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * headerRowTextStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * headerColumnTextStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * footerRowTextStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * tableNameStyle; 
@property (nonatomic,retain) TSWPShapeStyle * tableNameShapeStyle; 
@required
-(void)setTableStyle:(id)arg1;
-(void)setTableNameStyle:(id)arg1;
-(void)setTableNameShapeStyle:(id)arg1;
-(TSTTableStyle *)tableStyle;
-(TSTCellStyle *)bodyCellStyle;
-(TSTCellStyle *)headerColumnCellStyle;
-(TSTCellStyle *)footerRowCellStyle;
-(TSTCellStyle *)headerRowCellStyle;
-(TSWPParagraphStyle *)bodyTextStyle;
-(TSWPParagraphStyle *)headerColumnTextStyle;
-(TSWPParagraphStyle *)footerRowTextStyle;
-(TSWPParagraphStyle *)headerRowTextStyle;
-(TSWPParagraphStyle *)tableNameStyle;
-(TSWPShapeStyle *)tableNameShapeStyle;
-(void)setBodyCellStyle:(id)arg1;
-(void)setHeaderColumnCellStyle:(id)arg1;
-(void)setFooterRowCellStyle:(id)arg1;
-(void)setHeaderRowCellStyle:(id)arg1;
-(void)setBodyTextStyle:(id)arg1;
-(void)setHeaderColumnTextStyle:(id)arg1;
-(void)setFooterRowTextStyle:(id)arg1;
-(void)setHeaderRowTextStyle:(id)arg1;

@end

