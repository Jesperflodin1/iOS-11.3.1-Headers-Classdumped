/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDStroke;


@protocol TSTTableStrokeProviding <NSObject>
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * defaultVerticalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * bodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * headerColumnBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowSeparatorStroke; 
@required
-(TSDStroke *)defaultHorizontalBorderStroke;
-(TSDStroke *)defaultHorizontalBorderStrokeEvenIfNotVisible;
-(TSDStroke *)defaultVerticalBorderStroke;
-(TSDStroke *)bodyRowStrokeEvenIfNotVisible;
-(TSDStroke *)bodyColumnStroke;
-(TSDStroke *)bodyRowStroke;
-(TSDStroke *)headerColumnBorderStroke;
-(TSDStroke *)headerColumnBodyColumnStroke;
-(TSDStroke *)headerColumnBodyRowStroke;
-(TSDStroke *)headerColumnSeparatorStroke;
-(TSDStroke *)headerRowBorderStroke;
-(TSDStroke *)headerRowBodyColumnStroke;
-(TSDStroke *)headerRowBodyRowStroke;
-(TSDStroke *)headerRowSeparatorStroke;
-(TSDStroke *)footerRowBorderStroke;
-(TSDStroke *)footerRowBodyColumnStroke;
-(TSDStroke *)footerRowBodyRowStroke;
-(TSDStroke *)footerRowSeparatorStroke;

@end
