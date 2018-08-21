/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStorageParagraphObserver.h>

@class TSWPStorage, NSString;

@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver> {

	TSWPStorage* _storage;
	vector<TSWPParagraphMetrics, std::__1::allocator<TSWPParagraphMetrics> >* _paragraphMetrics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSWPParagraphMetrics*)paragraphMetricsForParagraphAtIndex:(unsigned long long)arg1 ;
-(void)storage:(id)arg1 didInsertParagraphsInIndexRange:(NSRange)arg2 ;
-(void)storage:(id)arg1 didDeleteParagraphsInIndexRange:(NSRange)arg2 ;
-(void)storage:(id)arg1 didChangeParagraphsInIndexRange:(NSRange)arg2 ;
-(id)initWithStorage:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end

