//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GenInstModelUICoordinator_NotificationHandlerProtocol-Protocol.h"

@class EcTimer, NSMutableSet, NSString;
@protocol GenInstModelUICoordinator_NotificationHandlerDelegateProtocol;

@interface GenInstModelUICoordinator_NotificationHandleriOS : NSObject <GenInstModelUICoordinator_NotificationHandlerProtocol>
{
    _Bool _regenerateNotificationsAreAdded;
    _Bool _uiNotificationsAreAdded;
    _Bool _needsUpdateLibrary;
    _Bool _needsUpdateCharacter;
    _Bool _needsUpdateSelection;
    _Bool _needsRegenerate;
    _Bool _needsRegenerateForFolders;
    _Bool _needsUpdateAfterTrackRemove;
    NSMutableSet *_regenerateFolderIDs;
    EcTimer *_timer;
    id <GenInstModelUICoordinator_NotificationHandlerDelegateProtocol> _delegate;
}

@property(nonatomic) id <GenInstModelUICoordinator_NotificationHandlerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) EcTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *regenerateFolderIDs; // @synthesize regenerateFolderIDs=_regenerateFolderIDs;
@property(nonatomic) _Bool needsUpdateAfterTrackRemove; // @synthesize needsUpdateAfterTrackRemove=_needsUpdateAfterTrackRemove;
@property(nonatomic) _Bool needsRegenerateForFolders; // @synthesize needsRegenerateForFolders=_needsRegenerateForFolders;
@property(nonatomic) _Bool needsRegenerate; // @synthesize needsRegenerate=_needsRegenerate;
@property(nonatomic) _Bool needsUpdateSelection; // @synthesize needsUpdateSelection=_needsUpdateSelection;
@property(nonatomic) _Bool needsUpdateCharacter; // @synthesize needsUpdateCharacter=_needsUpdateCharacter;
@property(nonatomic) _Bool needsUpdateLibrary; // @synthesize needsUpdateLibrary=_needsUpdateLibrary;
@property(nonatomic) _Bool uiNotificationsAreAdded; // @synthesize uiNotificationsAreAdded=_uiNotificationsAreAdded;
@property(nonatomic) _Bool regenerateNotificationsAreAdded; // @synthesize regenerateNotificationsAreAdded=_regenerateNotificationsAreAdded;
- (void)handleTrackRemovedNotification:(id)arg1;
- (void)handleRegionEditsNotification:(id)arg1;
- (void)handleRegenerateTriggeringNotifications:(id)arg1;
- (void)handleGeneratorJobFinishedNotification:(id)arg1;
- (void)handleCharacterUpdateNotification:(id)arg1;
- (void)handleLibraryDidLoadNotification:(id)arg1;
- (void)handleRegionSelectFlagChangedNotification:(id)arg1;
- (void)handleSelectNotification:(id)arg1;
- (void)removeUINotifications;
- (void)addUINotifications;
- (void)removeRegenerateNotifications;
- (void)addRegenerateNotifications;
- (void)resetDelegate;
- (vector_e94a763c)virtualGenInstTracksInFoldersWithIDs:(id)arg1;
- (void)timerCallback:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (struct CSong *)song;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

