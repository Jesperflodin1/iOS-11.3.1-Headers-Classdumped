/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RKNLEventToken : NSObject {

	unsigned _tokenID;
	NSString* _string;
	long long _location;
	long long _length;

}

@property (retain) NSString * string;               //@synthesize string=_string - In the implementation block
@property (assign) unsigned tokenID;                //@synthesize tokenID=_tokenID - In the implementation block
@property (assign) long long location;              //@synthesize location=_location - In the implementation block
@property (assign) long long length;                //@synthesize length=_length - In the implementation block
-(long long)length;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setLength:(long long)arg1 ;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(unsigned)tokenID;
-(id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3 ;
-(void)setTokenID:(unsigned)arg1 ;
@end

