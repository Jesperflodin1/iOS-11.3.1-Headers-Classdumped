/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionPerAccountOperation : HDClinicalIngestionOperation {

	HDClinicalAccount* _account;

}

@property (copy,readonly) HDClinicalAccount * account; 
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 ;
-(id)debugDescription;
-(HDClinicalAccount *)account;
@end
