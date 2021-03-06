/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/MMCSOperationMetric.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSMutableSet, NSArray, NSMutableDictionary, NSMutableArray, NSString;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	unsigned long long _recordsUploaded;
	unsigned long long _recordsDownloaded;
	unsigned long long _recordsDeleted;
	unsigned long long _assetsUploaded;
	unsigned long long _assetsUploadedFileSize;
	unsigned long long _assetsDownloaded;
	unsigned long long _assetsDownloadedFileSize;
	unsigned long long _requestCount;
	unsigned long long _retries;
	NSMutableSet* _requestUUIDs;
	NSMutableDictionary* _requestOperationCountsByType;
	NSMutableArray* _ranges;

}

@property (nonatomic,retain) NSMutableArray * ranges;                                         //@synthesize ranges=_ranges - In the implementation block
@property (retain) NSDate * startDate;                                                        //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                                           //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                                          //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                                          //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                                        //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                                            //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;                                     //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (assign) unsigned long long recordsUploaded;                                        //@synthesize recordsUploaded=_recordsUploaded - In the implementation block
@property (assign) unsigned long long recordsDownloaded;                                      //@synthesize recordsDownloaded=_recordsDownloaded - In the implementation block
@property (assign) unsigned long long recordsDeleted;                                         //@synthesize recordsDeleted=_recordsDeleted - In the implementation block
@property (assign) unsigned long long assetsUploaded;                                         //@synthesize assetsUploaded=_assetsUploaded - In the implementation block
@property (assign) unsigned long long assetsUploadedFileSize;                                 //@synthesize assetsUploadedFileSize=_assetsUploadedFileSize - In the implementation block
@property (assign) unsigned long long assetsDownloaded;                                       //@synthesize assetsDownloaded=_assetsDownloaded - In the implementation block
@property (assign) unsigned long long assetsDownloadedFileSize;                               //@synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize - In the implementation block
@property (assign) unsigned long long requestCount;                                           //@synthesize requestCount=_requestCount - In the implementation block
@property (assign) unsigned long long retries;                                                //@synthesize retries=_retries - In the implementation block
@property (readonly) NSMutableSet * requestUUIDs;                                             //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestOperationCountsByType;              //@synthesize requestOperationCountsByType=_requestOperationCountsByType - In the implementation block
@property (readonly) NSArray * rangesCopy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)connections;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)requestCount;
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(NSMutableSet *)requestUUIDs;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)addRange:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)addCKSpecificMetricsFromMetrics:(id)arg1 ;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(void)addRequestOperationCountsByOperationType:(id)arg1 ;
-(unsigned long long)recordsDownloaded;
-(void)setRecordsDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)assetsDownloaded;
-(void)setAssetsDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)assetsDownloadedFileSize;
-(void)setAssetsDownloadedFileSize:(unsigned long long)arg1 ;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(void)setConnections:(unsigned long long)arg1 ;
-(double)queueing;
-(void)setQueueing:(double)arg1 ;
-(double)executing;
-(unsigned long long)recordsUploaded;
-(unsigned long long)recordsDeleted;
-(unsigned long long)assetsUploaded;
-(unsigned long long)assetsUploadedFileSize;
-(unsigned long long)retries;
-(NSMutableDictionary *)requestOperationCountsByType;
-(void)setRecordsUploaded:(unsigned long long)arg1 ;
-(void)setAssetsUploaded:(unsigned long long)arg1 ;
-(void)setAssetsUploadedFileSize:(unsigned long long)arg1 ;
-(void)setRecordsDeleted:(unsigned long long)arg1 ;
-(void)setRetries:(unsigned long long)arg1 ;
-(id)_initWithStartDate:(id)arg1 ;
-(void)setRequestOperationCountsByType:(NSMutableDictionary *)arg1 ;
-(NSArray *)rangesCopy;
-(void)setExecuting:(double)arg1 ;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ranges;
@end

