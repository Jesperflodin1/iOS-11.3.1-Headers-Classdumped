/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NUFeedBlueprint : NSObject {

	NSMutableArray* _sections;

}

@property (nonatomic,readonly) NSMutableArray * sections;                        //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItems;
-(NSMutableArray *)sections;
@end
