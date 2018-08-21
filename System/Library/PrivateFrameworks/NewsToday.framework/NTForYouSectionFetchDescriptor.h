/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTCatchUpOperationForYouRequest, NSString;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTCatchUpOperationForYouRequest* _forYouRequest;

}

@property (nonatomic,copy) NTCatchUpOperationForYouRequest * forYouRequest;              //@synthesize forYouRequest=_forYouRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTCatchUpOperationForYouRequest *)forYouRequest;
-(void)setForYouRequest:(NTCatchUpOperationForYouRequest *)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithForYouConfiguration:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 mutedTagIDs:(id)arg4 purchasedTagIDs:(id)arg5 subscribedTagIDs:(id)arg6 ;
@end
