/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData;

@interface ICAuthorizeMachineResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * keybagData; 
@property (nonatomic,copy,readonly) NSData * tokenData; 
-(NSData *)keybagData;
-(NSData *)tokenData;
-(id)initWithResponseDictionary:(id)arg1 ;
@end
