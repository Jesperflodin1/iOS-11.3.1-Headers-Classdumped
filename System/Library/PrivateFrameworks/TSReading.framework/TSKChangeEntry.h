/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSKChangeEntry : NSObject {

	id mChangeSource;
	NSMutableArray* mChanges;

}

@property (nonatomic,readonly) id changeSource; 
@property (nonatomic,readonly) NSMutableArray * changes; 
-(void)dealloc;
-(id)initWithChangeSource:(id)arg1 changes:(id)arg2 ;
-(id)changeSource;
-(NSMutableArray *)changes;
@end

