/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTAction, NSArray;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTAction* _action;
	NSArray* _dateIntervals;

}

@property (nonatomic,readonly) RTAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSArray * dateIntervals;              //@synthesize dateIntervals=_dateIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(RTAction *)action;
-(BOOL)isEqualToActionCondition:(id)arg1 ;
-(NSArray *)dateIntervals;
-(id)initWithAction:(id)arg1 dateIntervals:(id)arg2 ;
@end
