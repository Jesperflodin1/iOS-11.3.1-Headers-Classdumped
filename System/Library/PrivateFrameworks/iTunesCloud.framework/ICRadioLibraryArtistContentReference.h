/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSString* _artistName;
	NSNumber* _representativeCloudIdentifier;
	NSNumber* _storeIdentifier;

}

@property (nonatomic,copy) NSString * artistName;                                 //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudIdentifier;              //@synthesize representativeCloudIdentifier=_representativeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)matchDictionary;
-(long long)contentType;
-(void)setRepresentativeCloudIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)representativeCloudIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)storeIdentifier;
@end
