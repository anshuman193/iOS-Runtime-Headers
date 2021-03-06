/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditTaskManager : NSObject {
    NSMutableDictionary * _pendingRequestsByAsset;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)clearEditsForPhoto:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)pendingSaveRequestForPhoto:(id)arg1;
- (id)saveEditsForPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(int)arg3 irisEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)saveEditsForPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(int)arg3 irisEditModel:(id)arg4 completionHandler:(id /* block */)arg5;

@end
