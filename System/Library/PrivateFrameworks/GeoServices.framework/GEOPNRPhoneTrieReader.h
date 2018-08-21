/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRPhoneTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _phoneFile;
	unsigned char _maxPhoneNumLength;
	unsigned char _minPhoneNumLength;

}

@property (nonatomic,readonly) unsigned char minPhoneNumLength;              //@synthesize minPhoneNumLength=_minPhoneNumLength - In the implementation block
@property (nonatomic,readonly) unsigned char maxPhoneNumLength;              //@synthesize maxPhoneNumLength=_maxPhoneNumLength - In the implementation block
-(id)initWithFile:(id)arg1 ;
-(BOOL)lookupPhoneNumber:(id)arg1 idResult:(unsigned*)arg2 ;
-(unsigned char)maxPhoneNumLength;
-(unsigned char)minPhoneNumLength;
-(void)dealloc;
@end

