/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXCollectionContentDisplay <SXContentDisplay>
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) SXConvertibleValue gutter; 
@property (nonatomic,readonly) SXConvertibleValue rowSpacing; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long distribution; 
@property (nonatomic,readonly) unsigned long long widows; 
@property (nonatomic,readonly) BOOL variableSizing; 
@required
-(SXConvertibleValue)minimumWidth;
-(SXConvertibleValue)maximumWidth;
-(unsigned long long)alignment;
-(unsigned long long)distribution;
-(SXConvertibleValue)rowSpacing;
-(SXConvertibleValue)gutter;
-(unsigned long long)widows;
-(BOOL)variableSizing;

@end
