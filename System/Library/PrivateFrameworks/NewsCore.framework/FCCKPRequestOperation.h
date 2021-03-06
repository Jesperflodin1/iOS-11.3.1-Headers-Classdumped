/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRequestOperationHeader, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {

	FCCKPRequestOperationHeader* _header;
	FCCKPQueryRetrieveRequest* _queryRetrieveRequest;
	FCCKPRecordRetrieveRequest* _recordRetrieveRequest;
	FCCKPOperation* _request;

}

@property (nonatomic,readonly) BOOL hasRecordRetrieveRequest; 
@property (nonatomic,retain) FCCKPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveRequest; 
@property (nonatomic,retain) FCCKPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) FCCKPRequestOperationHeader * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) FCCKPOperation * request;                                        //@synthesize request=_request - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequest;
-(void)setRequest:(FCCKPOperation *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FCCKPOperation *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHeader:(FCCKPRequestOperationHeader *)arg1 ;
-(FCCKPRequestOperationHeader *)header;
-(FCCKPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setQueryRetrieveRequest:(FCCKPQueryRetrieveRequest *)arg1 ;
-(void)setRecordRetrieveRequest:(FCCKPRecordRetrieveRequest *)arg1 ;
-(BOOL)hasRecordRetrieveRequest;
-(FCCKPRecordRetrieveRequest *)recordRetrieveRequest;
-(BOOL)hasQueryRetrieveRequest;
-(BOOL)hasHeader;
@end

