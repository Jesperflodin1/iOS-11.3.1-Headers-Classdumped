/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	long long _priority;
	BOOL _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
+(BOOL)supportsSecureCoding;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(Class)classForKeyedArchiver;
-(void)launch;
-(NSString *)taskIdentifier;
-(CPLResource *)resource;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)classForCoder;
-(BOOL)isCancelled;
-(BOOL)isHighPriority;
-(void)cancelTask;
-(void)setResource:(CPLResource *)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
@end

