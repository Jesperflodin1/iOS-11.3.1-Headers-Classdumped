/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSRatingServicePerson.h>

@interface CLSRatingServiceContacts : CLSRatingServicePerson {

	float _contactCountThreshold;
	float _relationshipCountThreshold;
	float _familyCountThreshold;
	float _coworkerCountThreshold;
	float _homeAddressCountThreshold;
	float _workAddressCountThreshold;
	float _birthdayCountThreshold;
	float _companyCountThreshold;
	float _facebookCountThreshold;
	float _emailAddressCountThreshold;
	float _relationshipCountRelationshipsThreshold;
	float _homeAddressCountRelationshipsThreshold;
	float _workAddressCountRelationshipsThreshold;
	float _birthdayCountRelationshipsThreshold;
	float _companyCountRelationshipsThreshold;
	float _facebookCountRelationshipsThreshold;
	float _emailAddressCountRelationshipsThreshold;

}
-(id)init;
-(id)localRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(id)checklistsWithOperation:(id)arg1 ;
-(id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(void)_setThresholdsWithPlistDictionary:(id)arg1 ;
@end

