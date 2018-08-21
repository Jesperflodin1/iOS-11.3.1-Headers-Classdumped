/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry {

	BOOL _saverModeActive;
	long long _capacity;
	long long _state;
	NSString* _detailString;

}

@property (assign,nonatomic) long long capacity;                 //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) long long state;                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL saverModeActive;               //@synthesize saverModeActive=_saverModeActive - In the implementation block
@property (nonatomic,copy) NSString * detailString;              //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)capacity;
-(void)setCapacity:(long long)arg1 ;
-(BOOL)saverModeActive;
-(void)setSaverModeActive:(BOOL)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setDetailString:(NSString *)arg1 ;
-(NSString *)detailString;
@end

