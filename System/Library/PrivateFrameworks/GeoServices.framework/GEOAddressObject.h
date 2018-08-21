/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOAddressObjectProtocol.h>

@class _GEOAddressObject, NSString;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {

	_GEOAddressObject* _pimpl;
	int* _knownAccuracy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
+(id)addressObjectForPlaceData:(id)arg1 ;
+(id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 ;
+(id)libraryVersion;
+(BOOL)isLoggingDebug;
+(BOOL)isMarkingMMStrings;
+(void)setLoggingDebug:(BOOL)arg1 ;
+(void)markMMStrings:(BOOL)arg1 ;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(id)spokenStructuredAddress;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)spokenName;
-(id)spokenAddress;
-(id)phoneticLocaleIdentifier;
-(id)shortAddress;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)venueShortAddress;
-(id)spokenAddressForLocale:(id)arg1 ;
-(id)cnPostalAddress;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7 ;
-(id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4 ;
-(id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4 ;
-(id)initWithCurrentCountry;
-(id)fullAddressWithMultiline:(BOOL)arg1 ;
-(id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2 ;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1 ;
-(id)cityDisplayNameWithFallback:(BOOL)arg1 ;
-(id)parkingDisplayName;
-(id)venueLabel;
-(id)venueLabel:(long long)arg1 ;
-(id)venueLevel;
-(id)titlesForMapRect:(SCD_Struct_GE43)arg1 ;
-(id)rawBytes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)address;
@end

