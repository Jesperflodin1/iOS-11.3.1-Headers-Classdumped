/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * fullsize; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSURL * largeSize; 
@property (nonatomic,copy) NSURL * maximumSize; 
@property (nonatomic,retain) SAUIAppPunchOut * photoPunchOut; 
@property (nonatomic,copy) NSURL * thumbnail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photo;
+(id)photoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)maximumSize;
-(void)setMaximumSize:(NSURL *)arg1 ;
-(NSURL *)thumbnail;
-(void)setThumbnail:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSURL *)fullsize;
-(void)setFullsize:(NSURL *)arg1 ;
-(NSURL *)largeSize;
-(void)setLargeSize:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)photoPunchOut;
-(void)setPhotoPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

