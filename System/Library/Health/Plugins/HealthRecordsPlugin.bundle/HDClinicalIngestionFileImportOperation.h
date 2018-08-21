/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class NSData, NSError;

@interface HDClinicalIngestionFileImportOperation : HDClinicalIngestionPerAccountOperation {

	NSData* _documentData;
	NSError* _ingestionError;

}

@property (nonatomic,copy) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,copy) NSError * ingestionError;              //@synthesize ingestionError=_ingestionError - In the implementation block
-(void)setIngestionError:(NSError *)arg1 ;
-(NSError *)ingestionError;
-(void)main;
-(NSData *)documentData;
-(void)_cancelWithError:(id)arg1 ;
-(void)setDocumentData:(NSData *)arg1 ;
@end

