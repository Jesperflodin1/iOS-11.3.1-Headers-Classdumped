/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, NSDictionary;

@interface SFDeviceAssetQuery : NSObject {

	BOOL _forEngagement;
	BOOL _legacyFormats;
	LogCategory* _ucat;
	NSString* _productType;
	NSString* _mappedProductType;
	NSString* _marketingProductNumber;
	NSString* _color;
	NSString* _colorHousing;
	NSString* _colorCoverGlass;
	unsigned long long _version;
	NSDictionary* _additionalQueryParameters;

}

@property (nonatomic,readonly) LogCategory* ucat;                                     //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,readonly) NSString * stringIdentifier; 
@property (nonatomic,readonly) BOOL forEngagement;                                    //@synthesize forEngagement=_forEngagement - In the implementation block
@property (nonatomic,readonly) BOOL legacyFormats;                                    //@synthesize legacyFormats=_legacyFormats - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * mappedProductType;                            //@synthesize mappedProductType=_mappedProductType - In the implementation block
@property (nonatomic,readonly) NSString * marketingProductNumber;                     //@synthesize marketingProductNumber=_marketingProductNumber - In the implementation block
@property (nonatomic,readonly) NSString * color;                                      //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSString * colorHousing;                               //@synthesize colorHousing=_colorHousing - In the implementation block
@property (nonatomic,readonly) NSString * colorCoverGlass;                            //@synthesize colorCoverGlass=_colorCoverGlass - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalQueryParameters;              //@synthesize additionalQueryParameters=_additionalQueryParameters - In the implementation block
+(BOOL)deviceWantsLegacyFormats;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)color;
-(unsigned long long)version;
-(id)initWithProductType:(id)arg1 ;
-(NSString *)mappedProductType;
-(id)loggingProductType;
-(BOOL)forEngagement;
-(BOOL)legacyFormats;
-(NSString *)marketingProductNumber;
-(NSString *)colorHousing;
-(NSString *)colorCoverGlass;
-(NSDictionary *)additionalQueryParameters;
-(NSString *)stringIdentifier;
-(id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3 ;
-(id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2 ;
-(id)initWithHomePodColor:(unsigned long long)arg1 ;
-(id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(BOOL)arg3 ;
-(id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2 ;
-(LogCategory*)ucat;
-(void)setMappedProductType:(NSString *)arg1 ;
-(NSString *)productType;
@end
