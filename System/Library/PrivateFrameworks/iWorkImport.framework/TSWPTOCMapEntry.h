/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject {

	BOOL _showInTOC;
	TSWPTOCEntryStyle* _tocEntryStyle;

}

@property (nonatomic,retain) TSWPTOCEntryStyle * tocEntryStyle;              //@synthesize tocEntryStyle=_tocEntryStyle - In the implementation block
@property (assign,nonatomic) BOOL showInTOC;                                 //@synthesize showInTOC=_showInTOC - In the implementation block
-(BOOL)showInTOC;
-(id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2 ;
-(TSWPTOCEntryStyle *)tocEntryStyle;
-(void)setTocEntryStyle:(TSWPTOCEntryStyle *)arg1 ;
-(void)setShowInTOC:(BOOL)arg1 ;
-(id)copyWithContext:(id)arg1 ;
@end

