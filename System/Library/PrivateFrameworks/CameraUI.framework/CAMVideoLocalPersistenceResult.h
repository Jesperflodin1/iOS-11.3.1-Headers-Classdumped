/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDate, NSError;

@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding> {

	NSURL* _localDestinationURL;
	NSURL* _filteredLocalDestinationURL;
	NSURL* _linkedDestinationURL;
	NSURL* _filteredLinkedDestinationURL;
	NSString* _localPersistenceUUID;
	NSString* _stillPersistenceUUID;
	NSDate* _creationDate;
	NSError* _error;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                       //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * filteredLocalDestinationURL;               //@synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkedDestinationURL;                      //@synthesize linkedDestinationURL=_linkedDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * filteredLinkedDestinationURL;              //@synthesize filteredLinkedDestinationURL=_filteredLinkedDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localPersistenceUUID;                   //@synthesize localPersistenceUUID=_localPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                   //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                        //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_CA2)duration;
-(NSDate *)creationDate;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSError *)error;
-(NSString *)stillPersistenceUUID;
-(NSURL *)localDestinationURL;
-(id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 linkedURL:(id)arg3 filteredLinkedURL:(id)arg4 UUID:(id)arg5 duration:(SCD_Struct_CA2)arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(SCD_Struct_CA2)arg8 creationDate:(id)arg9 error:(id)arg10 ;
-(NSURL *)filteredLocalDestinationURL;
-(NSURL *)linkedDestinationURL;
-(NSURL *)filteredLinkedDestinationURL;
-(NSString *)localPersistenceUUID;
@end

