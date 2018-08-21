/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	int _identificationEntriesChangedNotifyToken;
	CXCallDirectoryManager* _callDirectoryManager;
	/*^block*/id _countryDialingCode;
	/*^block*/id _firstIdentificationEntriesForEnabledExtensions;

}

@property (nonatomic,readonly) CXCallDirectoryManager * callDirectoryManager;              //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
@property (nonatomic,readonly) int identificationEntriesChangedNotifyToken;                //@synthesize identificationEntriesChangedNotifyToken=_identificationEntriesChangedNotifyToken - In the implementation block
@property (nonatomic,copy) id countryDialingCode;                                          //@synthesize countryDialingCode=_countryDialingCode - In the implementation block
@property (nonatomic,copy) id firstIdentificationEntriesForEnabledExtensions;              //@synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions - In the implementation block
-(id)init;
-(void)dealloc;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(CXCallDirectoryManager *)callDirectoryManager;
-(id)countryDialingCode;
-(id)firstIdentificationEntriesForEnabledExtensions;
-(int)identificationEntriesChangedNotifyToken;
-(void)setCountryDialingCode:(id)arg1 ;
-(void)setFirstIdentificationEntriesForEnabledExtensions:(id)arg1 ;
@end

