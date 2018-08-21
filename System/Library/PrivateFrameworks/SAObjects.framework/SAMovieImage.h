/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAMovieResolution, NSURL, NSString;

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAMovieResolution * resolution; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)image;
+(id)imageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setUri:(NSURL *)arg1 ;
-(SAMovieResolution *)resolution;
-(void)setResolution:(SAMovieResolution *)arg1 ;
-(NSURL *)uri;
@end

