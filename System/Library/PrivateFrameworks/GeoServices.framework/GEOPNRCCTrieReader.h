/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRCCTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _ccFile;

}
-(id)initWithFile:(id)arg1 ;
-(id)lookupCCForPhNumber:(id)arg1 ;
-(void)dealloc;
@end

