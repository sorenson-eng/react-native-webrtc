package com.oney.WebRTCModule;

import android.net.Uri;

public class AssetUtils {
  public static Uri assetStringToUri(final String asset) {
    try {
      Uri uri = Uri.parse(asset);
      return uri;
    } catch (Exception e) {
      return Uri.EMPTY;
    }
  }

  public static String getAssetUriScheme(final Uri uri) {
    String scheme = uri.getScheme();
    if (scheme == null) {
      scheme = "";
    } else {
      scheme = scheme.toLowerCase();
    }
    return scheme;
  }
}