/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOResourceManifestConfiguration : NSObject {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;
	NSString* _disputedBorderCountryOverride;
	NSString* _disputedBorderRegionOverride;
	int _defaultScale;
	BOOL _requiresLegacyFormat;

}

@property (assign,nonatomic) unsigned tileGroupIdentifier;                        //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                         //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                                  //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                                    //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                         //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                         //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                              //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy) NSString * disputedBorderCountryOverride;              //@synthesize disputedBorderCountryOverride=_disputedBorderCountryOverride - In the implementation block
@property (nonatomic,copy) NSString * disputedBorderRegionOverride;               //@synthesize disputedBorderRegionOverride=_disputedBorderRegionOverride - In the implementation block
@property (nonatomic,readonly) int defaultScale;                                  //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                         //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(id)configurationWithPairedDevice:(id)arg1 ;
+(id)defaultConfiguration;
-(NSString *)dataDirectory;
-(BOOL)isDefaultConfiguration;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(NSString *)countryCode;
-(NSString *)osVersion;
-(void)setCountryCode:(NSString *)arg1 ;
-(int)defaultScale;
-(id)conciseDictionaryRepresentation;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)osBuild;
-(void)setOsBuild:(NSString *)arg1 ;
-(NSString *)disputedBorderRegionOverride;
-(NSString *)disputedBorderCountryOverride;
-(id)initWithConciseDictionaryRepresentation:(id)arg1 ;
-(id)manifestDictionaryRepresentation;
-(NSString *)directorySuffix;
-(NSString *)os;
-(NSString *)applicationVersion;
-(unsigned)tileGroupIdentifier;
-(void)setOs:(NSString *)arg1 ;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)setDisputedBorderCountryOverride:(NSString *)arg1 ;
-(void)setDisputedBorderRegionOverride:(NSString *)arg1 ;
-(BOOL)requiresLegacyFormat;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)hardwareIdentifier;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
@end

