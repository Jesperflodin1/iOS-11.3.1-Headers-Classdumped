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

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry {

	long long _type;
	double _displayStartDate;
	NSString* _detailString;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double displayStartDate;              //@synthesize displayStartDate=_displayStartDate - In the implementation block
@property (nonatomic,copy) NSString * detailString;                //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setDetailString:(NSString *)arg1 ;
-(NSString *)detailString;
-(void)setDisplayStartDate:(double)arg1 ;
-(double)displayStartDate;
@end

