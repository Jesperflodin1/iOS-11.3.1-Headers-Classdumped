/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage, TPPageIndexPath, TPSection;

@interface TPPageLayoutState : NSObject {

	TSWPStorage* _bodyStorage;
	BOOL _doingLayout;
	BOOL _allowParagraphMetrics;
	TPPageIndexPath* _pageIndexPath;
	unsigned long long _documentPageIndex;
	void* _bodyLayoutState;
	unsigned long long _bodyCharIndex;
	unsigned long long _footnoteIndex;
	unsigned long long _lastLaidOutSectionIndex;

}

@property (nonatomic,readonly) TPPageIndexPath * pageIndexPath;                              //@synthesize pageIndexPath=_pageIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionIndex; 
@property (nonatomic,readonly) unsigned long long pageIndex; 
@property (nonatomic,readonly) unsigned long long documentPageIndex;                         //@synthesize documentPageIndex=_documentPageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long lastLaidOutDocumentPageIndex; 
@property (nonatomic,readonly) unsigned long long lastLaidOutSectionIndex;                   //@synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex - In the implementation block
@property (assign,nonatomic) void* bodyLayoutState;                                          //@synthesize bodyLayoutState=_bodyLayoutState - In the implementation block
@property (assign,nonatomic) unsigned long long bodyCharIndex;                               //@synthesize bodyCharIndex=_bodyCharIndex - In the implementation block
@property (assign,nonatomic) unsigned long long footnoteIndex;                               //@synthesize footnoteIndex=_footnoteIndex - In the implementation block
@property (assign,nonatomic) BOOL doingLayout;                                               //@synthesize doingLayout=_doingLayout - In the implementation block
@property (assign,nonatomic) BOOL allowParagraphMetrics;                                     //@synthesize allowParagraphMetrics=_allowParagraphMetrics - In the implementation block
@property (nonatomic,__weak,readonly) TPSection * section; 
@property (nonatomic,readonly) NSRange sectionCharRange; 
@property (nonatomic,readonly) BOOL onLastSection; 
@property (nonatomic,readonly) BOOL isLayoutComplete; 
-(BOOL)isLayoutComplete;
-(void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(id)initWithBodyStorage:(id)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(NSRange)sectionCharRange;
-(BOOL)onLastSection;
-(BOOL)isLayoutCompleteThroughDocumentPageIndex:(unsigned long long)arg1 ;
-(BOOL)isLayoutCompleteUpToDocumentPageIndex:(unsigned long long)arg1 ;
-(void)restartLayoutFromFirstPage;
-(void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void)advancePageIndex;
-(void)advanceSectionIndex;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(TPPageIndexPath *)pageIndexPath;
-(unsigned long long)documentPageIndex;
-(void*)bodyLayoutState;
-(void)setBodyLayoutState:(void*)arg1 ;
-(unsigned long long)bodyCharIndex;
-(void)setBodyCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)footnoteIndex;
-(void)setFootnoteIndex:(unsigned long long)arg1 ;
-(BOOL)doingLayout;
-(void)setDoingLayout:(BOOL)arg1 ;
-(BOOL)allowParagraphMetrics;
-(void)setAllowParagraphMetrics:(BOOL)arg1 ;
-(unsigned long long)lastLaidOutSectionIndex;
-(TPSection *)section;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
@end

