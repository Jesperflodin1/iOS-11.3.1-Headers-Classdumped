/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASItemOperationsFetchCommand : NSObject {

	NSString* _collectionID;
	NSString* _serverID;
	NSString* _longID;

}
-(id)longID;
-(id)collectionID;
-(id)initWithCollectionID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3 ;
-(id)serverID;
@end
