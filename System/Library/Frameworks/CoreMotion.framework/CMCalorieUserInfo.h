/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem {

	double fAge;
	long long fGender;
	double fHeight;
	double fWeight;
	long long fCondition;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) long long condition; 
+(id)genderString:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(double)age;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(long long)condition;
-(double)weight;
-(long long)gender;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
@end

