/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICLibraryAuthServiceClientTokenIdentifier;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying> {

	NSString* _token;
	long long _generatedAtMillis;
	long long _timeToLiveMillis;
	long long _lifespanMillis;
	ICLibraryAuthServiceClientTokenIdentifier* _tokenIdentitifer;

}

@property (nonatomic,copy,readonly) NSString * token;                                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) long long generatedAtMillis;                                                    //@synthesize generatedAtMillis=_generatedAtMillis - In the implementation block
@property (nonatomic,readonly) long long timeToLiveMillis;                                                     //@synthesize timeToLiveMillis=_timeToLiveMillis - In the implementation block
@property (nonatomic,readonly) long long lifespanMillis;                                                       //@synthesize lifespanMillis=_lifespanMillis - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenIdentifier * tokenIdentitifer;              //@synthesize tokenIdentitifer=_tokenIdentitifer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(long long)generatedAtMillis;
-(long long)lifespanMillis;
-(ICLibraryAuthServiceClientTokenIdentifier *)tokenIdentitifer;
-(long long)timeToLiveMillis;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

