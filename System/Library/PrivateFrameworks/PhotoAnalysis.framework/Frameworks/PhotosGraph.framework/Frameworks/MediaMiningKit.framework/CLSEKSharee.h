/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding> {

	BOOL _isCurrentUserForSharing;
	BOOL _isCurrentUserForScheduling;
	NSString* _emailAddress;
	NSString* _name;
	NSString* _UUID;

}

@property (readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUserForSharing;                 //@synthesize isCurrentUserForSharing=_isCurrentUserForSharing - In the implementation block
@property (readonly) BOOL isCurrentUserForScheduling;              //@synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)UUID;
-(NSString *)emailAddress;
-(BOOL)isCurrentUserForScheduling;
-(BOOL)isCurrentUserForSharing;
-(id)initWithEKSharee:(id)arg1 ;
@end

