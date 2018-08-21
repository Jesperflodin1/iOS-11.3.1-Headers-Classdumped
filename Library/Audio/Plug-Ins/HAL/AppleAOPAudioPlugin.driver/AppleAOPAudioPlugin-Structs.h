/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:31:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Library/Audio/Plug-Ins/HAL/AppleAOPAudioPlugin.driver/AppleAOPAudioPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct shared_ptr<AOPAudioDeviceHWManager> {
	AOPAudioDeviceHWManager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AOPAudioDeviceHWManager>;

typedef struct shared_ptr<CAMutex> {
	CAMutex __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<CAMutex>;

typedef struct _AuxiliaryIOStatus {
	unsigned mSizeOfAuxiliaryIOStatus;
	unsigned long long mRealtimeAvailablePastData;
} AuxiliaryIOStatus;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int> >;

typedef struct DeviceInfo {
	unsigned mDeviceObjectID;
	vector<unsigned int, std::__1::allocator<unsigned int> > mInterestNotificationList;
} DeviceInfo;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct _compressed_pair<CADispatchQueue *, std::__1::default_delete<CADispatchQueue> > {
	CADispatchQueue __value_;
} compressed_pair<CADispatchQueue *, std::__1::default_delete<CADispatchQueue> >;

typedef struct unique_ptr<CADispatchQueue, std::__1::default_delete<CADispatchQueue> > {
	compressed_pair<CADispatchQueue *, std::__1::default_delete<CADispatchQueue> > __ptr_;
} unique_ptr<CADispatchQueue, std::__1::default_delete<CADispatchQueue> >;

typedef struct _compressed_pair<CAMutex *, std::__1::default_delete<CAMutex> > {
	CAMutex __value_;
} compressed_pair<CAMutex *, std::__1::default_delete<CAMutex> >;

typedef struct unique_ptr<CAMutex, std::__1::default_delete<CAMutex> > {
	compressed_pair<CAMutex *, std::__1::default_delete<CAMutex> > __ptr_;
} unique_ptr<CAMutex, std::__1::default_delete<CAMutex> >;

