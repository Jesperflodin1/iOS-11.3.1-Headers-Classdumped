/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <CoreSpotlight/CSSearchableItem.h>

@class NSDictionary, NSString, NSURL, NSData;

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary * attributes; 
@property (copy) NSString * displayName; 
@property (copy) NSString * secondaryDisplayName; 
@property (copy) NSString * contentUTI; 
@property (copy) NSURL * contentURL; 
@property (copy) NSURL * thumbnailURL; 
@property (copy) NSData * thumbnailImageData; 
@property (copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3 ;
-(NSString *)secondaryDisplayName;
-(void)setSecondaryDisplayName:(NSString *)arg1 ;
-(NSString *)contentUTI;
-(void)setContentUTI:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)displayName;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSString *)localizedDisplayName;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSData *)thumbnailImageData;
@end

