/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMSoftwareUpdateDocumentationMetadata, NSObject, NSURLSession, SZExtractor, NSInputStream, NSURL, HMSoftwareUpdateDocumentation, NSString;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding> {

	BOOL _shouldAutomaticallyCache;
	long long _state;
	NSUUID* _identifier;
	HMSoftwareUpdateDocumentationMetadata* _metadata;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSURLSession* _URLSession;
	SZExtractor* _extrator;
	NSInputStream* _archivedFileStream;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) SZExtractor * extrator;                                  //@synthesize extrator=_extrator - In the implementation block
@property (nonatomic,retain) NSInputStream * archivedFileStream;                      //@synthesize archivedFileStream=_archivedFileStream - In the implementation block
@property (assign) BOOL shouldAutomaticallyCache;                                     //@synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) HMSoftwareUpdateDocumentation * documentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * propertyDescription; 
+(BOOL)supportsSecureCoding;
+(id)assetWithURL:(id)arg1 ;
+(id)logCategory;
+(id)assetDirectoryURL;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSUUID *)identifier;
-(id)bundleURL;
-(NSURL *)URL;
-(id)shortDescription;
-(HMSoftwareUpdateDocumentationMetadata *)metadata;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSString *)propertyDescription;
-(void)startCaching;
-(HMSoftwareUpdateDocumentation *)documentation;
-(id)archiveURL;
-(id)metadataURL;
-(void)setShouldAutomaticallyCache:(BOOL)arg1 ;
-(void)startDownload;
-(void)startUnarchive;
-(void)cancelDownload;
-(BOOL)saveWithError:(id*)arg1 ;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(void)setArchivedFileStream:(NSInputStream *)arg1 ;
-(void)setExtrator:(SZExtractor *)arg1 ;
-(NSInputStream *)archivedFileStream;
-(SZExtractor *)extrator;
-(id)initWithDocumentationMetadata:(id)arg1 ;
-(BOOL)shouldAutomaticallyCache;
-(void)finishDownload;
-(void)setExtractionProgress:(double)arg1 ;
-(BOOL)purgeWithError:(id*)arg1 ;
-(void)cancelUnarchive;
-(void)finishUnarchive;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

