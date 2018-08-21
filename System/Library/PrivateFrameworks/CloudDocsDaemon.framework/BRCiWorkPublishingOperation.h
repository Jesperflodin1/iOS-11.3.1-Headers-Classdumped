/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCItemID, NSArray, NSNumber, BRCServerZone, NSString;

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCItemID* _itemID;
	NSArray* _recordIDs;
	BOOL _forPublish;
	BOOL _readonly;
	NSNumber* _sharingInfo;
	BRCServerZone* _serverZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithDocumentItem:(id)arg1 forPublish:(BOOL)arg2 readonly:(BOOL)arg3 ;
-(void)_updateItemAfterShareCompleted;
@end

