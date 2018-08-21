/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@protocol OS_dispatch_queue;
@class TSSStylesheet, TSUMutableRetainedPointerSet, NSObject;

@interface TSSStylesheetPasteboardProxy : TSPObject {

	TSSStylesheet* mStylesheet;
	TSUMutableRetainedPointerSet* mReferencedStyles;
	NSObject*<OS_dispatch_queue> mReferencedStylesQueue;
	BOOL mSelfArchiving;

}
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 stylesheet:(id)arg2 ;
-(void)addStyleReference:(id)arg1 ;
-(void)dealloc;
@end

