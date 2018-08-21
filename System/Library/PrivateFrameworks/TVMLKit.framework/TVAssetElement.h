/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSString, NSURL, NSNumber;

@interface TVAssetElement : TVViewElement

@property (nonatomic,readonly) IKAssetElement * assetElement; 
@property (nonatomic,readonly) NSString * actionParams; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSURL * extrasURL; 
@property (nonatomic,readonly) unsigned long long keyDelivery; 
@property (nonatomic,readonly) NSNumber * persistentID; 
@property (nonatomic,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSURL * url; 
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)type;
-(NSNumber *)persistentID;
-(NSString *)adamID;
-(IKAssetElement *)assetElement;
-(NSString *)actionParams;
-(NSURL *)extrasURL;
-(unsigned long long)keyDelivery;
-(NSNumber *)rentalAdamID;
@end
