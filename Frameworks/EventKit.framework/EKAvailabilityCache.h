/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCache : NSObject {
    NSString * _accountID;
    NSMutableDictionary * _addressesToCachedSpanRanges;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned int  _cancelledID;
    NSMutableDictionary * _ignoredEventIDsToAddressBasedCaches;
    unsigned int  _nextRequestID;
    NSObject<OS_dispatch_queue> * _processingQueue;
    BOOL  _sourceIsInvalid;
    BOOL  _sourceSupportsAvailabilityRequests;
}

+ (int)_convertType:(int)arg1;
+ (id)_generateEventKitSpansFromPersistenceSpans:(id)arg1;
+ (BOOL)_isValidStartDate:(id)arg1 endDate:(id)arg2;
+ (void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)_dictionaryForIgnoredEventID:(id)arg1;
- (void)_handleResults:(id)arg1 resultsBlock:(id /* block */)arg2 ignoredEventID:(id)arg3;
- (void)cancelAvailabilityRequestWithID:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSource:(id)arg1;
- (id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;

@end
