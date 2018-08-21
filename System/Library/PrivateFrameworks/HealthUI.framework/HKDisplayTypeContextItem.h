/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, HKUIMetricColors;

@interface HKDisplayTypeContextItem : NSObject {

	BOOL _infoHidden;
	long long _heartType;
	NSString* _title;
	NSString* _unit;
	NSString* _value;
	NSAttributedString* _attributedValue;
	NSString* _dateString;
	HKUIMetricColors* _metricColors;
	HKUIMetricColors* _selectedMetricColors;

}

@property (assign,nonatomic) long long heartType;                                  //@synthesize heartType=_heartType - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL infoHidden;                                      //@synthesize infoHidden=_infoHidden - In the implementation block
@property (nonatomic,copy) NSString * unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy) NSString * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;                   //@synthesize attributedValue=_attributedValue - In the implementation block
@property (nonatomic,copy) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                      //@synthesize metricColors=_metricColors - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * selectedMetricColors;              //@synthesize selectedMetricColors=_selectedMetricColors - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
-(BOOL)infoHidden;
-(NSAttributedString *)attributedValue;
-(HKUIMetricColors *)metricColors;
-(HKUIMetricColors *)selectedMetricColors;
-(long long)heartType;
-(void)setHeartType:(long long)arg1 ;
-(void)setInfoHidden:(BOOL)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setSelectedMetricColors:(HKUIMetricColors *)arg1 ;
@end

