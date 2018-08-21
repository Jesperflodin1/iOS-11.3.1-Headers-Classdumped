/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOPhoneNumberMUIDMapper : NSObject {

	NSObject*<OS_dispatch_queue> _writeQ;
	NSMutableArray* _uniquePhoneNumbers;
	NSMutableDictionary* _phoneNumberMuidMapping;
	NSString* _filePath;

}
-(id)initWithMappingFilePath:(id)arg1 ;
-(BOOL)getMuid:(out unsigned long long*)arg1 providerId:(out int*)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)_pruneToSize:(unsigned long long)arg1 ;
-(void)_save;
@end

