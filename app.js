const locationRef = db.ref("location");

locationRef.on("value", (snapshot) => {
  const data = snapshot.val();

  document.getElementById("location").innerText =
    "Lat: " + data.lat + ", Lng: " + data.lng;
});