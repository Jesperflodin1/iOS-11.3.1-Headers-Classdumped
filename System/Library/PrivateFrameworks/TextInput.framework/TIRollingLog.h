/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TIRollingLog : NSObject <NSCopying> {

	NSMutableArray* _entries;
	unsigned long long _nextIndex;
	unsigned long long _count;
	unsigned long long _maxCount;

}

@property (nonatomic,readonly) NSArray * currentEntries; 
-(void)addEntries:(id)arg1 ;
-(NSArray *)currentEntries;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
@end
