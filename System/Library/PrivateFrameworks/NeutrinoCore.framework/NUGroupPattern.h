/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUGroupPattern : NUPattern {

	NSArray* _group;

}

@property (readonly) NSArray * group;              //@synthesize group=_group - In the implementation block
-(id)init;
-(NSArray *)group;
-(id)tokens;
-(id)stringRepresentation;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(id)shortestMatch;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToGroupPattern:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
@end
